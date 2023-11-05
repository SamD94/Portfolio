<%inherit file="dialog.tpl"/>

<%block name="blkDialogId">diaCreateZipDone</%block>

<%block name="blkDialogHeader">
  Downloading App Zip...
</%block>

<%block name="blkDialogContent">
  <div class="dialog-text-center">
    Your app ZIP is ready. If the download doesn't start immediately, click <a href="${downloadURL}" download id="downloadZipLink" class="colored-link">here</a>.
  </div>

  <button id="diaCreateZipDoneOk" class="button">Got It!</button>
</%block>

<%block name="blkDialogScript">
  function diaCreateZipDoneCloseHandler() {
      destroyDialog('diaCreateZipDone');
  }

  diaCreateZipDoneClose.addEventListener('click', diaCreateZipDoneCloseHandler);
  diaCreateZipDoneOk.addEventListener('click', diaCreateZipDoneCloseHandler);

  focusElem('diaCreateZipDoneOk');
  document.getElementById('downloadZipLink').click();
</%block>
