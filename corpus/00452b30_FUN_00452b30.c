
void FUN_00452b30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_005b1f0c + 0xd0;
  if (param_1 == -1) {
    FUN_00415ac0(2,0);
    uVar1 = Shield_GetMax(&DAT_005b20e0,iVar2);
    puVar4 = &DAT_005b20e8;
    puVar3 = &DAT_005b20f0;
  }
  else {
    FUN_00415ac0(1,0);
    uVar1 = Shield_GetMax(&DAT_005b20e0,iVar2);
    puVar4 = &DAT_005b20f0;
    puVar3 = &DAT_005b20e8;
  }
  iVar2 = FUN_004562d0(puVar3,puVar4,uVar1);
  if (iVar2 != 0) {
    FUN_00466590(3,3,0,0xff);
  }
  return;
}

