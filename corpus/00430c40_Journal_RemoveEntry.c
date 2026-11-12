
/* sweep */

void Journal_RemoveEntry(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined2 local_174;
  undefined1 local_172;
  undefined4 local_170;
  undefined4 local_16c [2];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_158;
  char local_100 [128];
  undefined4 local_80 [32];
  
  local_174 = DAT_0053ebb4;
  local_172 = DAT_0053ebb6;
  iVar2 = Journal_HasEntry(param_1);
  if (iVar2 != 0) {
    local_170 = File_SetBypassPff(1);
    uVar3 = Journal_GetPath(local_16c);
    iVar2 = Cbin_LoadFile(uVar3);
    if (iVar2 != 0) {
      local_164 = local_16c[0];
      local_160 = 0;
      local_158 = 0;
      uVar3 = Journal_GetPath();
      iVar2 = lcreat_file_and_do_error_stuff(uVar3);
      if (iVar2 != -1) {
        iVar4 = Cbin_NextKey(local_100,0x80,local_16c);
        while (iVar4 != 0) {
          pcVar6 = local_100;
          puVar7 = local_80;
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            puVar7 = puVar7 + 1;
          }
          _strtok(local_80,&local_174);
          iVar4 = _strtok(0,&local_174);
          Journal_StripLine(iVar4);
          if (iVar4 == 0) {
            uVar5 = 0xffffffff;
            pcVar6 = local_100;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
LAB_00430d80:
            Journal_WriteBuffer(iVar2,local_100,~uVar5);
          }
          else {
            iVar4 = __stricmp(iVar4,param_1);
            if (iVar4 != 0) {
              uVar5 = 0xffffffff;
              pcVar6 = local_100;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              goto LAB_00430d80;
            }
          }
          iVar4 = Cbin_NextKey(local_100,0x80,local_16c);
        }
      }
      Cbin_Free(local_16c);
    }
    close_glbl_open_file();
    File_SetBypassPff(local_170);
  }
  return;
}

