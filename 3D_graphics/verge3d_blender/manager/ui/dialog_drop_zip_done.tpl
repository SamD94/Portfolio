<%inherit file="dialog.tpl"/>

<%block name="blkDialogId">diaDropZipDone</%block>

<%block name="blkDialogHeader">
  App ZIP Successfully Added
</%block>

<%block name="blkDialogContent">
  <div class="dialog-text-center">
    Application <a href="${manageURL}" class="colored-link">${nameDisp}</a> has been successfully added.
  </div>

  <button id="diaDropZipDoneOk" class="button">Yay!</button>
</%block>

<%block name="blkDialogScript">
  diaDropZipDone.addEventListener('click', function() {
      destroyDialog('diaDropZipDone');
      document.location.reload(true);
  });

  focusElem('diaDropZipDoneOk');
</%block>
