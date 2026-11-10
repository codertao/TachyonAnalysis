
/* Spx_LinkSection: slot(+0x18/+0x1c) = SPX target-rule list */

void Quad_SetGroupTargetRules(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = Quad_AllocGroupSlot(param_1,param_2);
  }
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return;
}

