const { app, BrowserWindow } = require('electron');

const SHOW_FULLSCREEN = ${showFullscreen};

function createWindow() {
    // create the browser window
    const win = new BrowserWindow({
        width: 1280,
        height: 800,
        show: false,
        webPreferences: {
            nodeIntegration: true
        }
    });

    if (SHOW_FULLSCREEN && process.platform !== 'darwin')
        win.removeMenu();

    win.show();
    win.setFullScreen(SHOW_FULLSCREEN);

    // and load the main file of the app
    win.loadFile('${mainHTML}');
}

app.commandLine.appendSwitch('force_high_performance_gpu');

app.whenReady().then(createWindow);
