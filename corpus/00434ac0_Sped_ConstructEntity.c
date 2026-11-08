
/* build live entity from a SPED def: pos+0x34 (def+8/c/10), ORIENTATION euler angles +0x4c
   (def+0x14/18/1c<<16, NOT velocity), vtable/update+0x68/+0x6c/+0x80, def+0x8c, world+0xd8 */

undefined4 Sped_ConstructEntity(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar5 = Sped_GetDefList(param_1,param_3);
  iVar6 = FUN_004345f0(uVar5,*(undefined4 *)(param_1 + 0x5c));
  if (iVar6 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x1000) != 0) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0x24) & 1) != 0) && (DAT_005b1f0c != 0)) {
    param_2 = DAT_005b1f0c;
  }
  iVar6 = DcbPool_Alloc(&DAT_0058afc4,2,param_3);
  if (iVar6 != 0) {
    FUN_0041b850(iVar6);
    *(int *)(iVar6 + 0x8c) = param_2;
    *(int *)(iVar6 + 0xd8) = param_1;
    *(undefined4 *)(iVar6 + 0xd0) = *(undefined4 *)(param_2 + 0x548);
    *(int *)(param_1 + 0x28) = iVar6;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (*(int *)(param_1 + 0x68) == 0) {
      *(undefined **)(iVar6 + 0x33c) = &DAT_005322b8;
    }
    else {
      *(undefined **)(iVar6 + 0x33c) = &DAT_005321c8;
    }
    uVar2 = FUN_00434530(param_1);
    *(undefined1 *)(iVar6 + 0xf6) = uVar2;
    uVar5 = Sped_GetDefList(param_1,param_3);
    if (*(char *)(param_1 + 0x38) == '\0') {
      cVar3 = *(char *)(param_2 + 0x544);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x38) + -1;
    }
    *(char *)(iVar6 + 0xc2) = cVar3;
    if (*(byte *)(param_1 + 0x39) == 0) {
      *(undefined2 *)(iVar6 + 0x310) = *(undefined2 *)(param_2 + 0x55c);
    }
    else {
      *(ushort *)(iVar6 + 0x310) = *(byte *)(param_1 + 0x39) - 1;
    }
    iVar7 = FUN_004344a0(iVar6);
    if (iVar7 != 0) {
      *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
      *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
    }
    *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(*(int *)(iVar6 + 0x8c) + 0x290);
    *(undefined1 *)(iVar6 + 0x7e) = *(undefined1 *)(*(int *)(iVar6 + 0x8c) + 0x294);
    if (param_4 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
      *(int *)(iVar6 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
      *(int *)(iVar6 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
      *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
    }
    else {
      *(undefined4 *)(iVar6 + 0x34) = *param_4;
      *(undefined4 *)(iVar6 + 0x38) = param_4[1];
      *(undefined4 *)(iVar6 + 0x3c) = param_4[2];
      *(undefined4 *)(iVar6 + 0x4c) = param_4[3];
      *(undefined4 *)(iVar6 + 0x50) = param_4[4];
      *(undefined4 *)(iVar6 + 0x54) = param_4[5];
    }
    puVar1 = (undefined4 *)(iVar6 + 0xdc);
    *puVar1 = *(undefined4 *)(iVar6 + 0x4c);
    *(undefined4 *)(iVar6 + 0xe0) = *(undefined4 *)(iVar6 + 0x50);
    *(undefined4 *)(iVar6 + 0xe4) = *(undefined4 *)(iVar6 + 0x54);
    if ((GLBL_spacesav[0x2f] == 2) &&
       (*(short *)(iVar6 + 0x310) = *(short *)(iVar6 + 0x310) + 1, 3 < *(ushort *)(iVar6 + 0x310)))
    {
      *(undefined2 *)(iVar6 + 0x310) = 3;
    }
    *(undefined1 **)(iVar6 + 0x68) = &LAB_004039c0;
    *(code **)(iVar6 + 0x6c) = Ai_CollisionLookahead;
    *(code **)(iVar6 + 0x80) = AiShip_OnDamage;
    if ((*(int *)(param_1 + 0x68) == 0) && ((*(byte *)(param_1 + 0x24) & 0x10) == 0)) {
      FUN_00401e20(iVar6);
      FUN_00423e80(iVar6,*(float *)(*(int *)(iVar6 + 0x8c) + 0xbc) * *(float *)(iVar6 + 300));
    }
    else {
      FUN_00401080(iVar6,0xb);
      *(undefined4 *)(iVar6 + 0x6c) = 0;
    }
    *(undefined4 *)(iVar6 + 800) = DAT_005a5540;
    *(undefined2 *)(iVar6 + 0x312) = 0x300;
    *(undefined4 *)(iVar6 + 0x90) = 0;
    *(undefined1 *)(iVar6 + 0xc1) = 0x60;
    *(undefined1 *)(iVar6 + 0xc3) = 0;
    *(undefined1 *)(iVar6 + 0xc0) = 5;
    *(undefined4 *)(iVar6 + 0xb8) = 0x28000;
    bVar4 = FUN_004344f0(param_1);
    *(byte *)(iVar6 + 0xc0) = *(byte *)(iVar6 + 0xc0) | bVar4;
    iVar7 = *(int *)(*(int *)(iVar6 + 0x8c) + 0x308);
    if (iVar7 != 0) {
      FUN_004935c0(iVar6 + 0x13c,*(int *)(iVar6 + 0x8c) + 0x4d0,iVar7,0,0xd500,
                   *(undefined4 *)(param_2 + 0x564),1);
    }
    uVar8 = FUN_00455dd0(*(undefined4 *)(param_2 + 0x564));
    FUN_004560a0(iVar6 + 0x10c,*(int *)(iVar6 + 0x8c) + 0xd0,1,uVar8,1);
    FUN_00434630(uVar5,*(undefined4 *)(param_1 + 0x5c),iVar6 + 0x10c);
    FUN_0045cff0(iVar6,*(int *)(iVar6 + 100) + 0x14);
    FUN_00434960(iVar6,param_1);
    Nav_InitRoute(iVar6,param_1,puVar1,param_3,param_1 + 0x48,uVar5);
    if (param_4 == (undefined4 *)0x0) {
      uVar5 = *(undefined4 *)(param_1 + 0x54);
      uVar9 = *(uint *)(param_1 + 0x24) & 0x20;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x54);
      uVar9 = 1;
    }
    FUN_00434a30(iVar6,puVar1,uVar5,uVar9);
    FUN_00457df0(param_3,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_2 + 0x1c));
    if ((*(byte *)(param_1 + 0x24) & 0x20) == 0) {
      FUN_0048b090(iVar6,3,2);
    }
    else {
      *(byte *)(iVar6 + 0xc0) = *(byte *)(iVar6 + 0xc0) & 0xfe;
    }
    if ((*(uint *)(param_2 + 0x564) & 0x1000) != 0) {
      FUN_004986a0(iVar6 + 0x2fc);
    }
    return 1;
  }
  return 0;
}

