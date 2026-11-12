
/* sweep: [JNL_ENTRIES] */

void Journal_AddEntry(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char local_100 [256];
  
  iVar2 = Journal_HasEntry(param_2);
  if (iVar2 == 0) {
    uVar3 = Journal_GetPath();
    iVar2 = File_Exists(uVar3);
    if (iVar2 == 0) {
      uVar3 = Journal_GetPath();
      iVar2 = lcreat_file_and_do_error_stuff(uVar3);
      if (iVar2 == -1) {
        return;
      }
      str_sprintf(local_100,s__JNL_ENTRIES__c_c_0053eb80,0xd,10);
      uVar4 = 0xffffffff;
      pcVar5 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      save_to_open_file(local_100,~uVar4 - 1);
    }
    else {
      uVar3 = Journal_GetPath();
      iVar2 = File_OpenRead(uVar3);
    }
    if (iVar2 != -1) {
      move_to_end_of_file_and_get_len(0,2);
      str_sprintf(local_100,s_ENTRY__d__s_c_c_0053eb70,param_1,param_2,0xd,10);
      uVar4 = 0xffffffff;
      pcVar5 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = save_to_open_file(local_100,~uVar4 - 1);
      if (iVar2 == -1) {
        GetLastError();
      }
      close_glbl_open_file();
    }
  }
  return;
}

