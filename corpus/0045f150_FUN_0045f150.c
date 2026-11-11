
void FUN_0045f150(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d680(*param_1,g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    SrvSend_EntityClassInfo(iVar1);
  }
  return;
}

