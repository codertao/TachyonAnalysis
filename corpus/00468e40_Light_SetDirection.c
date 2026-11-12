
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Light_SetDirection(int param_1,int param_2,int param_3)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = param_1 << 0xd;
  local_8 = param_2 << 0xd;
  local_4 = param_3 << 0xd;
  _DAT_005878e0 = DAT_00668f3c;
  _DAT_005878e4 = DAT_00668f40;
  _DAT_005878e8 = DAT_00668f44;
  Nop();
  Light_SetSunDirection(&local_c);
  return;
}

