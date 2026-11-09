
void __cdecl FUN_10003a60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = malloc(0x10000);
  *param_1 = puVar1;
  for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[1] = *param_1;
  param_1[2] = *param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

