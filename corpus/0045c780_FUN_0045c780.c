
void FUN_0045c780(int param_1)

{
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  if ((DAT_00603e48 & 2) == 0) {
    local_1c = (-(uint)((DAT_00603e48 & 1) != 0) & 0x30000) + 0x10000;
  }
  else {
    local_1c = 0x2000;
  }
  local_1c = local_1c * param_1;
  FUN_004b1bb0(local_18,&DAT_0058f1f8);
  FUN_004b24d0(&local_24,&local_24);
  DAT_0058f1ec = DAT_0058f1ec + local_24;
  DAT_0058f1f0 = DAT_0058f1f0 + local_20;
  DAT_0058f1f4 = DAT_0058f1f4 + local_1c;
  return;
}

