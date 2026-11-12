
/* sweep */

undefined4 Journal_HasEntry(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_ec [108];
  undefined1 local_80 [128];
  
  uVar4 = 0;
  uVar1 = File_SetBypassPff(1);
  uVar2 = Journal_GetPath(local_ec);
  iVar3 = Cbin_LoadFile(uVar2);
  if (iVar3 != 0) {
    iVar3 = Cbin_FindSection(s_JNL_ENTRIES_0053eb94,local_ec);
    if (iVar3 == 0) {
      Cbin_Free(local_ec);
      File_SetBypassPff(uVar1);
      return 0;
    }
    iVar3 = Cbin_FindParam(s_ENTRY_0053eba0,local_80,0x80,0,4,2,local_ec);
    while (iVar3 != 0) {
      iVar3 = __stricmp(local_80,param_1);
      if (iVar3 == 0) {
        uVar4 = 1;
        break;
      }
      iVar3 = Cbin_FindParam(s_ENTRY_0053eba0,local_80,0x80,0,4,2,local_ec);
    }
    Cbin_Free(local_ec);
  }
  File_SetBypassPff(uVar1);
  return uVar4;
}

