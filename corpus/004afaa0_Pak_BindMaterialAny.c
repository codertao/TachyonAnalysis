
/* flags&8 ? texture : flat colour */

void Pak_BindMaterialAny(int param_1)

{
  if ((*(byte *)(param_1 + 0x16) & 8) != 0) {
    FUN_004af8d0();
    return;
  }
  Pak_BindMaterial(param_1);
  return;
}

