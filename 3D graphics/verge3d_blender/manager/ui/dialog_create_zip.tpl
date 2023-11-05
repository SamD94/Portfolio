<%inherit file="dialog.tpl"/>

<%block name="blkDialogId">diaCreateZip</%block>

<%block name="blkDialogHeader">
  Create Project ZIP
</%block>

<%block name="blkDialogContent">

  <form action="" class="TODO" id="createZipForm">

    <div class="dialog-text">Save ZIP where:</div>

    <div title="Save created ZIP file to local file system">
      <input type="radio" name="zipWhere" value="local" class="dialog-radio" checked>Local File System
    </div>

    <div title="Upload created ZIP file to Verge3D Network">
      <input type="radio" name="zipWhere" value="network" class="dialog-radio">Verge3D Network
    </div>

    <input type="submit" id="diaCreateZipSubmit" value="Create ZIP" class="button">

  </form>


</%block>

<%block name="blkDialogScript">

    ${parent.blkDialogScript()}

    createZipForm.addEventListener('submit', function(event) {
        closeDialog('diaCreateZip');

        const zipWhere = document.querySelector('input[name="zipWhere"]:checked').value;

        if (zipWhere == 'local') {

            const url = "/storage/create_app_zip/?app=${app['name'] | u}";

            makeRequest(url, null, function(response) {
                const dia = appendDialog(response);
                openDialog(dia);
            });

        } else {

            publishApp("${app['name'] | u}", true);

        }

        event.preventDefault();
    });

    focusElem('diaCreateZipSubmit');

</%block>
