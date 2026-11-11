
/* persistent records per snapshot: 12 during startup (state 2), else DAT_0058b070 */

int __cdecl Tach_SrvPageSize(TachConn *conn)

{
  int iVar1;
  
  iVar1 = 0xc;
  if (conn->state != 2) {
    iVar1 = DAT_0058b070;
  }
  return iVar1;
}

