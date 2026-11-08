
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
    uVar2 = FUN_00461cf0(param_1,puVar1,param_2);
    uVar2 = FUN_00461c10(param_1,uVar2,param_2);
    FUN_00461df0(param_1,uVar2,param_2);
    return;
  case 3:
    FUN_00461e40(param_1,puVar1,param_2);
    return;
  case 4:
    FUN_00461ea0(param_1,puVar1,param_2);
    return;
  case 5:
    FUN_00461f40(param_1,puVar1,param_2);
  }
  return;
}

