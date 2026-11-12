
/* sweep */

undefined4 Pff_ReadWholeEntry(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = Pff_OpenEntry(param_1,param_3);
  if (iVar2 == 0) {
    *(undefined4 *)(param_3 + 0xb4) = 1;
    return 0xffffffff;
  }
  pbVar1 = *(byte **)(param_3 + 0x9c);
  if (param_2 != 0) {
    read_some_bytes_and_update_seek_ptr(param_2,*(undefined4 *)(pbVar1 + 8),param_3);
    if ((*pbVar1 & 1) != 0) {
      decrypt_str_xor_rol_312a4ce(param_2,*(undefined4 *)(pbVar1 + 8));
    }
  }
  *(undefined4 *)(param_3 + 0xb4) = 0;
  return *(undefined4 *)(pbVar1 + 8);
}

