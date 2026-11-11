
void FUN_0045f880(undefined4 *param_1)

{
  Quadrant *pQVar1;
  int iVar2;
  
  pQVar1 = g_SrvCurShip->quadrant;
  iVar2 = FUN_0045d680(*param_1,pQVar1);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(iVar2 + 0xf0) + 0x58) == 0) {
      FUN_0045f690(iVar2,pQVar1);
    }
    else {
      Gate_JumpToSector();
    }
    FUN_004269b0(iVar2 + 0x34,pQVar1,g_SrvCurConn);
  }
  return;
}

