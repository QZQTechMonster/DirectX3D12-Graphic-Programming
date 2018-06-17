/*
#include <windows.h> // Ϊ��ʹ�ú���XMVerifyCPUSupport������Ƿ�֧��SSE2
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <iostream>
using namespace std;
using namespace DirectX;
using namespace DirectX::PackedVector;

// ����  "<<" ��������������XMVECTOR���͵Ķ���
ostream& XM_CALLCONV operator<<(ostream& os, FXMVECTOR v)
{
    // XMVECTOR���ݲ���ֱ�ӷ��ʣ����Ҫ����ת����
    XMFLOAT3 dest;
    XMStoreFloat3(&dest, v);

    os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ")";
    return os;
}

int main()
{
    // ����Ƿ�֧��SSE2 (Pentium4, AMD K8, and above).
    if (!XMVerifyCPUSupport())
    {
        cout << "directx math not supported" << endl;
        return 0;
    }
    
    // һЩ���õĻ�ȡXMVECTOR����ĺ���
    XMVECTOR p = XMVectorZero();
    XMVECTOR q = XMVectorSplatOne();
    XMVECTOR u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);
    XMVECTOR v = XMVectorReplicate(-2.0f);
    XMVECTOR w = XMVectorSplatZ(u);

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "u = " << u << endl;
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;
    
    system("pause");
    return 0;
}
*/