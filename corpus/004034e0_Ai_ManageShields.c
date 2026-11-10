
/* every 128 frames: ACE/ELITE raise shield recharge as shields drop (25%/50%); rookies don't */

void Ai_ManageShields(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar1 = iVar3 + 0xd0;
  iVar2 = param_1 + 0x10c;
  iVar5 = Shield_GetMax(iVar2,iVar1);
  if (*(ushort *)(param_1 + 0x310) < 2) {
    if (*(int *)(iVar3 + 0xe0) * 4 < *(int *)(param_1 + 0x114)) goto LAB_0040357e;
LAB_0040356d:
    uVar6 = 0x800;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x114);
    if (iVar4 <= *(int *)(iVar3 + 0xe0) * 4) goto LAB_0040356d;
    if (iVar5 >> 2 < iVar4) {
      if (iVar5 >> 1 < iVar4) {
        if (*(int *)(param_1 + 0x118) == 0x10000) goto LAB_0040357e;
        uVar6 = 0x10000;
      }
      else {
        uVar6 = 0x18000;
      }
    }
    else {
      uVar6 = 0x20000;
    }
  }
  Power_SetRate(iVar2,uVar6,0,iVar1);
LAB_0040357e:
  Power_UpdateSpeedFactor(iVar2,iVar1);
  return;
}

