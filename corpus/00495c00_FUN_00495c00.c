
void FUN_00495c00(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  iVar4 = *(int *)(param_1 + 0xdc);
  local_30 = 0;
  local_2c = 0;
  local_28 = *(int *)(iVar4 + 0x3c);
  iVar2 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (((**(uint **)(iVar2 + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0) {
    FUN_004b1bb0(local_18,param_1 + 0x4c);
    FUN_004b24d0(&local_30,&local_30);
    local_30 = local_30 + *(int *)(param_1 + 0x34);
    local_2c = local_2c + *(int *)(param_1 + 0x38);
    local_28 = local_28 + *(int *)(param_1 + 0x3c);
    iVar2 = FUN_00418d10(&local_30,param_1 + 0x34,local_24,iVar2 + 0x14,param_1,
                         *(undefined4 *)(param_1 + 200),*(undefined4 *)(iVar4 + 0xd0),&LAB_00494910)
    ;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar4 + 0x3c);
      if (*(int *)(param_1 + 200) == DAT_005b3300) {
        FUN_00427ff0(DAT_005b1b3c,1);
        FUN_0042b9e0(1,0,0x80,0x80);
      }
    }
    else {
      uVar3 = FUN_0048e440(param_1 + 0x34,iVar2 + 0x34);
      *(undefined4 *)(param_1 + 0xd4) = uVar3;
      if ((*(int *)(param_1 + 0xd8) == 1) && (*(int *)(param_1 + 200) == DAT_005b3300)) {
        *(undefined4 *)(param_1 + 0xec) = 1;
        if ((*(int *)(iVar2 + 0x8c) != 0) &&
           (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
          iVar4 = (*pcVar1)(iVar2,0xf,0);
          if (iVar4 != 0) {
            FUN_004152a0(iVar2,1);
            FUN_00427ff0(DAT_005b1b40,1);
            FUN_0042b9e0(1,0,0xff,0xff);
            return;
          }
        }
      }
    }
  }
  return;
}

