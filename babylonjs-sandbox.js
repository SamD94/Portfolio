import * as BABYLON from 'babylon';

const canvas = document.getElementById('renderCanvas');
const engine = new BABYLON.Engine(canvas, true);
const createScene = function() {
    const scene = new BABYLON.Scene(engine);
    return scene;
}
const scene = createScene();
engine.runRenderLoop(function() {
    scene.render();
});