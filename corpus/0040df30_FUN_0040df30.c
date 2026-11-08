
void FUN_0040df30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0044fe80();
  if (iVar1 == 0) {
    FUN_0040df00();
    FUN_0044fc30();
    SrvSend_RoundResume();
    return;
  }
  FUN_0040df00();
  uVar2 = FUN_0044fe30();
  Sector_StartMP(uVar2);
  return;
}

