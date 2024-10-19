# NI_Linux_Realtime_Build_example

[참고 사이트] https://nilrt-docs.ni.com/cross_compile/config_dev_system.html

## 1. Cross compile을 위한 Compiler다운로드 ( x64 기준)
### 1.1 NI 소프트웨어-- GNU C& C++ Compile Tools x64 다운로드
``` bash
    https://www.ni.com/en-us/support/downloads/software-products/download.gnu-c---c---compile-tools-x64.html#477802
```
![image](https://github.com/user-attachments/assets/bf2052c1-689a-4708-8790-1c77327e385f)

버전은 CompactRio버전에 알맞게 선택 필요. CompactRio 9030기준 2018-2019 선택.

### 1.2 툴체인 설치
1. Open a terminal and navigate to the directory where the toolchain was downloaded.
2. 다운 받은 툴체인파일의 권한을 +x로 변경( root rwx user r-x gest r-x)
```bash
    chmod +x oecore-x86_64-core2-64-toolchain-6.0.sh
```
3. 툴체인 설치
```bash
   sudo ./oecore-x86_64-core2-64-toolchain-6.0.sh
```
![image](https://github.com/user-attachments/assets/50d778c5-1418-4683-a740-cd2609e67dd7)

```bash
   . /usr/local/oecore-x86_64/environment-setup-core2-64-nilrt-linux
```
만약 오류가 나는 경우 PATH 설정 후 재진행
```bash
    unset LD_LIBRARY_PATH
    echo 'export PATH="$PATH:/usr/local/oecore-x86_64/sysroots/x86_64-nilrtsdk-linux/usr/bin"' >> ~/.bashrc
    source ~/.basrhc
    source /usr/local/oecore-x86_64/environment-setup-core2-64-nilrt-linux
```
4. Windows dll생성을 위한 toolchain설치(만약 Labview가 Linux에 설치되어 있다면 이 작업은 불필요, 자신의 윈도우 시스템이 32bit인지 64bit인지 확인필요.)
```bash
   sudo apt-get install mingw-w64
```


## 2. 예제 빌드 방법
1. 이 레포지토리에서 예제 다운.
   ```bash
       git clone https://github.com/MinchangSung0223/NI_Linux_Realtime_Build_example
   ```
2. CMake설정
```bash
    sudo apt-get install cmake-qt-gui
```
```bash
      mkdir  build
      cd build
      cmake-gui ..
```
![image](https://github.com/user-attachments/assets/08c9fdba-caa7-4d90-86d6-f5347f555a2e)

3. 먼저 CompactRio용으로 빌드하여 so파일 생성
 ```bash
    cmake .. -DBUILD_FOR_COMPACTRIO=ON -DBUILD_FOR_WINDOWS=OFF
 ```
4. Windows용으로 빌드하여 dll파일 생성
    ```bash
    cmake .. -DBUILD_FOR_COMPACTRIO=OFF -DBUILD_FOR_WINDOWS=ON
 ```
