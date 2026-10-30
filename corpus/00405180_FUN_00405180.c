
void FUN_00405180(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x312) = 0;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  pcVar1 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x58);
  if (pcVar1 == (code *)0x0) {
    local_24 = *(undefined4 *)(iVar3 + 0x34);
    local_20 = *(undefined4 *)(iVar3 + 0x38);
    local_1c = *(undefined4 *)(iVar3 + 0x3c);
  }
  else {
    (*pcVar1)(iVar3,2,&local_24);
  }
  iVar2 = FUN_00401350(param_1,(undefined4 *)(iVar3 + 0x4c),&local_24,
                       *(int *)(param_1 + 0x8c) + 0x598);
  if (iVar2 != 0) {
    FUN_00401080(param_1,0xb);
    iVar3 = FUN_00405d60(iVar3);
    if (iVar3 != 0) {
      uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
      uStack_4 = *(undefined4 *)(iVar3 + 0x20);
      uStack_18 = 1;
      uStack_8 = 1;
      uStack_10 = 0xb;
      uStack_c = 0;
      FUN_0048ddc0(&uStack_18,*(undefined4 *)(param_1 + 100));
    }
  }
  return;
}

