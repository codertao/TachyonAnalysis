
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Teletype_SetDelay(int param_1,float param_2)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_2 * _DAT_0052e544);
  *(undefined4 *)(&DAT_0056abd0 + param_1 * 0x170) = local_8;
  return;
}

