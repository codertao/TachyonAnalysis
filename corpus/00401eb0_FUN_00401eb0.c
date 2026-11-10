
void FUN_00401eb0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00401e90(param_2,param_1);
  if (iVar2 != 0) {
    if (iVar2 == param_1) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
      *(int *)(param_2 + 0xfc) = param_1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xfc);
      *(int *)(iVar2 + 0xfc) = param_1;
      *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(param_1 + 0xfc) = uVar1;
    }
    *(undefined4 *)(param_2 + 0xf8) = 0;
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0xec);
    iVar2 = *(int *)(param_2 + 0xfc);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xfc)) {
      *(int *)(iVar2 + 0xf8) = param_2;
    }
    if ((*(int *)(param_2 + 0x104) == 0xc) || (*(int *)(param_2 + 0x104) == 4)) {
      Ai_ReturnToDefault(param_2);
    }
    FUN_00457d70(*(undefined4 *)(param_2 + 100),*(undefined4 *)(*(int *)(param_2 + 0xd8) + 0x54),
                 param_2);
  }
  return;
}

