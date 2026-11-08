
undefined1 * FUN_004a3c70(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)mem_GetMemEx_probably_alloc(param_3 * 2,4,0,s_alpha_image_0055e11c);
  puVar2 = puVar1;
  if (param_3 == 0) {
    return puVar1;
  }
  do {
    *puVar2 = *param_1;
    puVar2[1] = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    puVar2 = puVar2 + 2;
  } while (param_3 != 0);
  return puVar1;
}

