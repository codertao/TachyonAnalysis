
void FUN_00463790(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x21c) != 0) {
    FUN_00466160(param_1,*(int *)(param_2 + 0x21c),*(undefined4 *)(param_2 + 0x230),2,
                 *(undefined4 *)(param_2 + 0x238),*(undefined4 *)(param_2 + 0x248),
                 *(undefined4 *)(param_2 + 0x240));
    uVar1 = FUN_00466000(param_1 + 0x34,param_1 + 0xa0,param_1,*(undefined4 *)(param_2 + 0x224),
                         *(undefined4 *)(param_2 + 0x230),5,*(undefined4 *)(param_2 + 0x238),
                         *(undefined4 *)(param_2 + 0x250),*(undefined4 *)(param_2 + 0x240));
    *(undefined4 *)(param_1 + 0x104) = uVar1;
  }
  return;
}

