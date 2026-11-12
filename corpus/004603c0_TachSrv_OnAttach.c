
/* 0x2017: reply 0x1101 drop predicted; Sapper_AttachServer on target (or capship part) */

void TachSrv_OnAttach(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  SrvSend_DropPredicted(*(undefined4 *)(param_1 + 0xe),g_SrvCurConn);
  iVar1 = Quad_FindEntById(*(undefined4 *)(param_1 + 0x12),g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    if ((param_1[1] != '\0') &&
       (iVar1 = PartChain_FindById_dc(iVar1,*(undefined2 *)(param_1 + 0x16)), iVar1 == 0)) {
      return;
    }
    DAT_00565420 = g_SrvCurShip;
    f16_DecodeVec(param_1 + 2,local_c);
    f16_DecodeVec(param_1 + 8,local_18);
    Sapper_AttachServer(iVar1,*(undefined4 *)(param_1 + 0xe),*param_1,local_c,local_18,0);
  }
  return;
}

