
void FUN_00461a30(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(param_1 + 200);
  DAT_0058b068 = param_1;
  DAT_0058b064 = *(undefined4 *)(param_1 + 200);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(iVar1 + 0x124);
  *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(iVar1 + 300);
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(iVar1 + 0x140);
  *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)(iVar1 + 0x14c);
  param_2[5] = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0xff;
    *(undefined1 *)((int)param_2 + 5) = 0xff;
    *(undefined1 *)((int)param_2 + 6) = 0xff;
  }
  else {
    *param_2 = *(undefined4 *)(iVar1 + 0xd4);
    if (*(short *)(iVar1 + 0x76) == 1) {
      uVar3 = FUN_00461a00(iVar1);
      *(undefined1 *)((int)param_2 + 6) = uVar3;
    }
    *(undefined1 *)(param_2 + 1) = 100;
    *(undefined1 *)((int)param_2 + 5) = 100;
    if ((*(int *)(iVar1 + 0x8c) != 0) &&
       (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x58), pcVar2 != (code *)0x0)) {
      uVar3 = (*pcVar2)(iVar1,6,0);
      *(undefined1 *)(param_2 + 1) = uVar3;
      uVar3 = (*pcVar2)(iVar1,7,0);
      *(undefined1 *)((int)param_2 + 5) = uVar3;
      FUN_00461870(param_1,param_2 + 6);
      return;
    }
  }
  FUN_00461870(param_1,param_2 + 6);
  return;
}

