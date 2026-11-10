
void FUN_00432830(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int *piVar8;
  
  psVar7 = &DAT_005b8fa0;
  DAT_005b2154 = FUN_004327f0();
  uVar3 = FUN_00455dd0(DAT_005b2154);
  FUN_00456090(&g_PlayerPower,uVar3);
  uVar6 = DAT_005b2154 & 0x100000;
  uVar5 = 0;
  iVar4 = DAT_005b1f0c;
  if (*(int *)(DAT_005b1f0c + 0x638) != 0) {
    piVar8 = &DAT_005a68d8;
    do {
      if ((piVar8[-1] == 1) && (iVar1 = *piVar8, iVar1 != -1)) {
        *psVar7 = (short)iVar1 + 1;
        uVar3 = WeaponDef_Get(iVar1,uVar6);
        sVar2 = FUN_00492b40(uVar3);
        iVar4 = DAT_005b1f0c;
        psVar7[1] = sVar2;
      }
      else {
        *psVar7 = 0;
      }
      uVar5 = uVar5 + 1;
      piVar8 = piVar8 + 3;
      psVar7 = psVar7 + 2;
    } while (uVar5 < *(uint *)(iVar4 + 0x638));
  }
  FUN_004547e0(&DAT_005b8fa0,&DAT_005b1f10,iVar4);
  FUN_00453190();
  FUN_004986a0(&DAT_005b214c);
  Tach_SendLoadout(*(undefined4 *)(DAT_005b1f0c + 0x638),&DAT_005b8fa0,DAT_005b2154);
  return;
}

