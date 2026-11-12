
/* refine: startup kind 8 via rules +0x74 (NULL in MP, so never sent); client TachCli_ReadTechData
    */

void TachSrv_WriteTechData(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short sVar1;
  
  if (*(int *)(g_ActiveRules + 0x74) != 0) {
    *param_2 = 8;
    param_2[1] = 8;
    *(undefined4 *)(param_2 + 2) = 0;
    sVar1 = (**(code **)(g_ActiveRules + 0x74))(param_1,param_2,param_2 + 4);
    *param_3 = *param_3 + 1;
    param_2[1] = sVar1 - (short)param_2;
  }
  return;
}

