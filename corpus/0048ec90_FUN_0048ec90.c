
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048ec90(undefined4 param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  clr_bytes(param_3,0x18);
  iVar3 = FUN_004a2eb0(param_1);
  *param_3 = iVar3;
  if (iVar3 != 0) {
    mark_alloc_memory_with_flags(iVar3,param_4);
  }
  iVar3 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar1 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  param_1._0_1_ = (undefined1)iVar1;
  param_3._0_1_ = (undefined1)iVar3;
  *(undefined1 *)((int)piVar2 + 9) = (undefined1)param_1;
  *(undefined1 *)(piVar2 + 2) = param_3._0_1_;
  piVar2[3] = param_2 | 8;
  return *piVar2;
}

