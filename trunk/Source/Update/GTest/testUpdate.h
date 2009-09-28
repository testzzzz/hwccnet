#ifndef TEST_UPDATE_H
#define TEST_UPDATE_H

#include "gtest/gtest.h"
#include "..\Update\WinHTTPLW.h"
#include "..\Update\Update_i.h"
#include "..\Update\Update_i.c"

/// @class TestUpdate
/// @brief Ϊ��ӦTestSuite�¼�����TestSuite�¼���ʼ�ͽ���ʱ��ִ��һЩ��ʼ�����������
class TestUpdate : public testing::Test
{
public:
    static void SetUpTestCase()
    {
        ASSERT_HRESULT_SUCCEEDED(CoInitialize(NULL));

        ASSERT_HRESULT_SUCCEEDED(CoCreateInstance(
                                    CLSID_UpdateVersion,
                                    NULL,
                                    CLSCTX_INPROC_SERVER,
                                    IID_IUpdateVersion,
                                    reinterpret_cast<LPVOID*>(&pUpdate)
                                    ));
    }
    static void TearDownTestCase()
    {
        CoUninitialize();
        pUpdate = NULL;
    }

    static IUpdateVersion* pUpdate;
};

#endif