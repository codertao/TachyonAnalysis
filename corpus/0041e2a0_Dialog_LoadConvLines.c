
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Dialog_LoadConvLines(float param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_48;
  undefined1 local_40 [64];
  
  fVar1 = param_1;
  iVar4 = Cbin_CountEntries(param_1,&DAT_00535600);
  iVar2 = param_2;
  *(int *)(param_2 + 0x2c) = iVar4;
  if (iVar4 != 0) {
    puVar6 = (undefined4 *)(param_2 + 0x28);
    Mem_AllocZeroTagged(puVar6,iVar4 * 0xc,4,s_ACTOR_CONV_LINES_005355ec,0xd000);
    Cbin_SelectGroup(fVar1);
    uVar3 = param_3;
    puVar6 = (undefined4 *)*puVar6;
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0x2c)) {
      do {
        Cbin_FindParam_Global(&DAT_00535600,local_40,0x20,0,4,1);
        uVar5 = Dialog_FindDependant(uVar3,local_40);
        *puVar6 = uVar5;
        Cbin_GetParamN(&DAT_00535600,0,0,puVar6 + 2,1,2);
        Cbin_GetParamN(&DAT_00535600,0,0,&param_1,2,3);
        iVar4 = iVar4 + 1;
        local_48 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e548);
        puVar6[1] = local_48;
        puVar6 = puVar6 + 3;
      } while (iVar4 < *(int *)(iVar2 + 0x2c));
    }
  }
  return;
}

