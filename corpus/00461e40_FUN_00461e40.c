
void FUN_00461e40(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short sVar1;
  undefined2 *puVar2;
  short sVar3;
  
  puVar2 = param_2;
  *param_2 = 6;
  sVar1 = (short)param_2;
  if ((g_FlightStateFlags & 4) != 0) {
    *(undefined4 *)(param_2 + 2) = 0;
    *param_3 = *param_3 + 1;
    param_2[1] = (short)(param_2 + 4) - sVar1;
    return;
  }
  sVar3 = FUN_0044f720(param_2 + 4,&param_2);
  *(undefined2 **)(puVar2 + 2) = param_2;
  *param_3 = *param_3 + 1;
  puVar2[1] = sVar3 - sVar1;
  return;
}

