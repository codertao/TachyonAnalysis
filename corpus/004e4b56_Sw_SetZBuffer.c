
/* (buf) -> 0x4e4b08; triangle setup copies it (probably the depth buffer) */

void __cdecl Sw_SetZBuffer(void *buf)

{
  DAT_004e4b08 = buf;
  return;
}

