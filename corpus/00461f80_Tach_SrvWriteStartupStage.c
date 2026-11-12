
/* stages 0..5 */

void Tach_SrvWriteStartupStage(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  puVar1 = param_2 + 1;
  switch(param_3) {
  case 0:
    TachSrv_WriteModelTable(param_1,puVar1,param_2);
    return;
  case 1:
    TachSrv_WriteDescTable(param_1,puVar1,param_2);
    return;
  case 2:
    uVar2 = TachSrv_WriteRulesInfo(param_1,puVar1,param_2);
    uVar2 = TachSrv_WritePlayerInit(param_1,uVar2,param_2);
    TachSrv_WriteTechData(param_1,uVar2,param_2);
    return;
  case 3:
    TachSrv_WritePortraits(param_1,puVar1,param_2);
    return;
  case 4:
    TachSrv_WriteRoster(param_1,puVar1,param_2);
    return;
  case 5:
    TachSrv_WriteSessionInfo(param_1,puVar1,param_2);
  }
  return;
}

