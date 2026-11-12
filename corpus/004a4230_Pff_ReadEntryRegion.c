
/* sweep */

undefined4
Pff_ReadEntryRegion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5)

{
  int iVar1;
  
  iVar1 = Pff_OpenEntry(param_1,param_5);
  if (iVar1 == 0) {
    *(undefined4 *)(param_5 + 0xb4) = 1;
    return 0xffffffff;
  }
  Pff_SeekToEntry(param_3,1,param_5);
  read_some_bytes_and_update_seek_ptr(param_2,param_4,param_5);
  *(undefined4 *)(param_5 + 0xb4) = 0;
  return param_4;
}

