
/* sweep */

void ShipText_Load(void)

{
  DAT_005a6144 = load_rtxt_bin(s_shiptext_bin_00545c20,0xcccc);
  Mem_SetTag(DAT_005a6144,s_shiptext_bin_00545c20);
  return;
}

