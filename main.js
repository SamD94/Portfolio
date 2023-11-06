import * as THREE from 'three';
import {OrbitControls} from 'three/examples/jsm/controls/OrbitControls';
import {GLTFLoader} from 'three/examples/jsm/loaders/GLTFLoader';
import {FBXLoader} from 'three/examples/jsm/loaders/FBXLoader';
import {STLLoader} from 'three/examples/jsm/loaders/STLLoader';
import {OBJLoader} from 'three/examples/jsm/loaders/OBJLoader';
import {MTLLoader} from 'three/examples/jsm/loaders/MTLLoader';

const canvas = document.querySelector('.webgl');
const scene = new THREE.Scene();

const grid = new THREE.GridHelper(10, 100);
const axes = new THREE.AxesHelper(5);
scene.add(grid);
scene.add(axes);

const mtlLoader = new MTLLoader()
mtlLoader.load(
    'ameriquartz7121standard.mtl',
    (materials) => {
        materials.preload()

        const objLoader = new OBJLoader()
        objLoader.setMaterials(materials)
        objLoader.load(
            'ameriquartz7121standard.obj',
            (object) => {
                scene.add(object)
            },
            (xhr) => {
                console.log((xhr.loaded / xhr.total) * 100 + '% loaded')
            },
            (error) => {
                console.log('An error happened')
            }
        )
    },
    (xhr) => {
        console.log((xhr.loaded / xhr.total) * 100 + '% loaded')
    },
    (error) => {
        console.log('An error happened')
    }
)

const boxGeometry = new THREE.BoxGeometry(1, 1, 1);
const boxMaterial = new THREE.MeshPhysicalMaterial({ color:0x00ff00 });
boxMaterial.roughness = .5;
boxMaterial.metalness = .75;
const boxMesh = new THREE.Mesh(boxGeometry, boxMaterial);
boxMesh.position.y = 1;
scene.add(boxMesh);

const planeGeometry = new THREE.PlaneGeometry(10, 10);
const planeMaterial = new THREE.MeshPhysicalMaterial({ color:0xaaaaaa });
planeMaterial.roughness = .5;
const planeMesh = new THREE.Mesh(planeGeometry, planeMaterial);
planeMesh.rotation.x = -90 * Math.PI/180;
//scene.add(planeMesh);

const ambLight = new THREE.AmbientLight(0xffffff, .5);
scene.add(ambLight);

const dirLight = new THREE.DirectionalLight(0xffffff, 1);
dirLight.position.set(0,1,2);
scene.add(dirLight);

const sizes = {
    width: window.innerWidth,
    height: window.innerHeight
}

const camera = new THREE.PerspectiveCamera(75, sizes.width / sizes.height, 0.001, 100);
camera.position.set(0, 1, 2);
//camera.rotation.x = -.5;
scene.add(camera);

const renderer = new THREE.WebGLRenderer({
    canvas: canvas
});

renderer.setSize(sizes.width, sizes.height);
renderer.setPixelRatio(window.devicePixelRatio);
renderer.shadowMap.enabled = true;

const camControls = new OrbitControls(camera, renderer.domElement);
camControls.update();

function animate() {
    boxMesh.rotation.x -= .001;
    boxMesh.rotation.y += .01;
    requestAnimationFrame(animate);
    renderer.render(scene, camera);
}
animate();