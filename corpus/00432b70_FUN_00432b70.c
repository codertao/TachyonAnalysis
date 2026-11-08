
undefined4 FUN_00432b70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_204;
  undefined4 local_200 [64];
  char local_100 [256];
  
  uVar1 = DAT_006038b4;
  puVar3 = local_200;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_204 = 0;
  FUN_004a0d40(1);
  iVar2 = openfile(s_TACHYON_CD_0053f344);
  if (iVar2 == -1) {
    if (param_1 != 0) {
      FUN_00432a30(0xdf);
    }
    FUN_004a0d40(uVar1);
    return 0;
  }
  read_file_to_bin(local_100,1);
  close_glbl_open_file(iVar2);
  str_sprintf(&local_204,&DAT_0053f33c,(int)local_100[0]);
  FUN_00432ae0(&local_204,s_TACHYON_0053f334);
  str_sprintf(local_200,s__s_s__s_0053f314,&local_204,s_ttfsetup_0053f31c,s_tachyon_bik_0053f328);
  File_Exists(local_200);
  get_file_len(local_200);
  FUN_004a0d40(uVar1);
  return 1;
}

