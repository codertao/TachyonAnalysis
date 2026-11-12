
/* sweep */

void ShipDes_LoadContentScan(int *param_1)

{
  int iVar1;
  
  clr_bytes(param_1,8);
  Cbin_ParseTemplate_Global(&PTR_g_ShipDesTemplate_contentScanRange_005496e0);
  *param_1 = g_ShipDesTemplate.contentScanRange;
  param_1[1] = g_ShipDesTemplate.contentScanTime;
  iVar1 = *param_1;
  *param_1 = iVar1 << 0xd;
  if (iVar1 << 0xd == 0) {
    *param_1 = 0x1388000;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 * 0x32;
  if (iVar1 * 0x32 == 0) {
    param_1[1] = 0x96;
  }
  return;
}

