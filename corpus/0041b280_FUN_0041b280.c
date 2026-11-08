
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b280(SpED *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  clr_bytes(&GLBL_some_sped_ll_head,0xd4);
  DAT_005b29c8 = param_2;
  FUN_00434f10(param_1,param_3);
  iVar1 = FUN_004348d0(&(param_1->position).z);
  if ((iVar1 != 0) && ((param_1->field_0x24 & 8) == 0)) {
    FUN_00419dd0(param_3);
    DAT_005b29cc = param_3;
    _DAT_005b2a48 = *(undefined4 *)&param_1->field_0x8;
    _DAT_005b2a4c = *(undefined4 *)&param_1->field_0xc;
    _DAT_005b2a50 = *(undefined4 *)&param_1->field_0x10;
    GLBL_iter_cnt = FUN_0041b200();
    FUN_0041a450(GLBL_iter_cnt,&param_1->field_0x8);
    FUN_00457780(param_3,&LAB_0041b1d0);
  }
  return;
}

