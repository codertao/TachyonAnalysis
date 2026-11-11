
uint Crt_isspace(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_00561464) {
    uVar1 = Crt_isctype(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_00561258[param_1 * 2] & 8;
}

