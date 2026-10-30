
void FUN_0042a6b0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [24];
  
  *param_2 = *(int *)(param_1 + 0x34);
  param_2[1] = *(int *)(param_1 + 0x38);
  param_2[2] = *(int *)(param_1 + 0x3c);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,0xb,0);
    if (iVar2 != 0) {
      FUN_004b1bb0(auStack_18,param_1 + 0x4c);
      FUN_004b24d0(iVar2,&local_24);
    }
  }
  param_2[1] = param_2[1] + local_20;
  *param_2 = *param_2 + local_24;
  param_2[2] = param_2[2] + local_1c;
  return;
}

