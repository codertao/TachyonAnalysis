
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: asm, reg-passed args; guess */

undefined4 SndAsm_MixSetup(void)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = DAT_005f9d40 >> 1;
  _DAT_004cac02 = iVar1 >> ((byte)DAT_004cabfe & 0x1f);
  _DAT_004cac06 = iVar1 >> ((byte)((uint)DAT_004cabfe >> 8) & 0x1f);
  _DAT_004cac42 = iVar1 >> ((byte)DAT_004cac3e & 0x1f);
  _DAT_004cac46 = iVar1 >> ((byte)((uint)DAT_004cac3e >> 8) & 0x1f);
  _DAT_004cac82 = iVar1 >> ((byte)DAT_004cac7e & 0x1f);
  _DAT_004cac86 = iVar1 >> ((byte)((uint)DAT_004cac7e >> 8) & 0x1f);
  _DAT_004cacc2 = iVar1 >> ((byte)DAT_004cacbe & 0x1f);
  _DAT_004cacc6 = iVar1 >> ((byte)((uint)DAT_004cacbe >> 8) & 0x1f);
  _DAT_004cad02 = iVar1 >> ((byte)DAT_004cacfe & 0x1f);
  _DAT_004cad06 = iVar1 >> ((byte)((uint)DAT_004cacfe >> 8) & 0x1f);
  _DAT_004cad42 = iVar1 >> ((byte)DAT_004cad3e & 0x1f);
  _DAT_004cad46 = iVar1 >> ((byte)((uint)DAT_004cad3e >> 8) & 0x1f);
  _DAT_004cad82 = iVar1 >> ((byte)DAT_004cad7e & 0x1f);
  _DAT_004cad86 = iVar1 >> ((byte)((uint)DAT_004cad7e >> 8) & 0x1f);
  _DAT_004cadc2 = iVar1 >> ((byte)DAT_004cadbe & 0x1f);
  _DAT_004cadc6 = iVar1 >> ((byte)((uint)DAT_004cadbe >> 8) & 0x1f);
  _DAT_004cae02 = iVar1 >> ((byte)DAT_004cadfe & 0x1f);
  _DAT_004cae06 = iVar1 >> ((byte)((uint)DAT_004cadfe >> 8) & 0x1f);
  _DAT_004cae42 = iVar1 >> ((byte)DAT_004cae3e & 0x1f);
  _DAT_004cae46 = iVar1 >> ((byte)((uint)DAT_004cae3e >> 8) & 0x1f);
  _DAT_004cae82 = iVar1 >> ((byte)DAT_004cae7e & 0x1f);
  _DAT_004cae86 = iVar1 >> ((byte)((uint)DAT_004cae7e >> 8) & 0x1f);
  _DAT_004caec2 = iVar1 >> ((byte)DAT_004caebe & 0x1f);
  _DAT_004caec6 = iVar1 >> ((byte)((uint)DAT_004caebe >> 8) & 0x1f);
  _DAT_004caf02 = iVar1 >> ((byte)DAT_004caefe & 0x1f);
  _DAT_004caf06 = iVar1 >> ((byte)((uint)DAT_004caefe >> 8) & 0x1f);
  _DAT_004caf42 = iVar1 >> ((byte)DAT_004caf3e & 0x1f);
  _DAT_004caf46 = iVar1 >> ((byte)((uint)DAT_004caf3e >> 8) & 0x1f);
  _DAT_004caf82 = iVar1 >> ((byte)DAT_004caf7e & 0x1f);
  _DAT_004caf86 = iVar1 >> ((byte)((uint)DAT_004caf7e >> 8) & 0x1f);
  _DAT_004cafc2 = iVar1 >> ((byte)DAT_004cafbe & 0x1f);
  _DAT_004cafc6 = iVar1 >> ((byte)((uint)DAT_004cafbe >> 8) & 0x1f);
  return in_EAX;
}

