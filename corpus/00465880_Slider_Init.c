
/* sweep */

void Slider_Init(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_3 + 0xd4);
  iVar2 = *(int *)(param_3 + 0xd8);
  iVar3 = *(int *)(param_4 + 0xd4);
  iVar4 = *(int *)(param_4 + 0xd8);
  sbi_flags(param_3 + 0x204,0x100000);
  sbi_flags(param_4 + 0x204,0x100000);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  if (iVar4 - iVar2 < iVar3 - iVar1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_3 + 200) + *(int *)(param_3 + 0xd4);
    *(int *)(param_1 + 0x20) = *(int *)(param_3 + 0xd8) + 2;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0xd4);
    *(int *)(param_1 + 0x28) = *(int *)(param_3 + 0xcc) + -2 + *(int *)(param_3 + 0xd8);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_3 + 0xd4) + 2;
  *(int *)(param_1 + 0x20) = *(int *)(param_3 + 0xcc) + *(int *)(param_3 + 0xd8);
  *(int *)(param_1 + 0x24) = *(int *)(param_3 + 200) + -2 + *(int *)(param_3 + 0xd4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0xd8);
  return;
}

