
/* sweep: "BW UPGRADE TREE" */

void BW_RegisterUpgradeTree(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *local_4;
  
  Mem_AllocZeroTagged(&local_4,0xc,4,s_BW_UPGRADE_TREE_005334fc,0xbbbb);
  uVar1 = Race_FindByName(param_1);
  *local_4 = uVar1;
  local_4[1] = param_2;
  local_4[2] = DAT_005b97b0;
  DAT_005b97b0 = local_4;
  return;
}

