
/* near-record cap: 8, or 2 while conn+0x13c == 2 (startup) */

int __cdecl Tach_SrvNearCap(TachConn *conn)

{
  return ((conn->state != 2) - 1 & 0xfffffffa) + 8;
}

