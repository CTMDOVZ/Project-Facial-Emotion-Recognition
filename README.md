# **Reconocimiento de emociones usando opencv.**

![FACE LOGO](https://github.com/CS1103/proyecto-final---te02---202301-pf0220231-grupo2/assets/132113148/fdd5866b-608b-4801-ab0b-370b76446133)



## :star: Descripción del proyecto
<p align="justify">
Esta aplicación web se basará en una interfaz pragmática, sencilla de comprender y utilizar. Contaremos con un sistema de reconocimiento facial y asismismo funcionará tanto para imágenes como videos. El uso de deep learning nos ayudará a predecir e identificar las emociones en los rostros.
</p>

### Características
<p align="justify">
    Se divide en 3 archivos fundamentales, dos hechos en python y el algoritmo que reconocerá las emociones a tiempo real en c++. El primero de ellos se encarga de recopilar 200 imágenes para cada emoción que requiere nuestro proyecto, enojo, felicidad, tristeza y asombro; el segundo de ellos entrena estos datos y el último captura tu rostro y reconoce la emoción según el entrenamiento que ha tenido.
</p>


### Visión del proyecto
<p align="justify">
    Buscamos aprovechar a lo máximo el uso de las redes neuronales y así innovar con el algoritmo implementado. De esta manera, poder ofrecer una tecnología muy eficaz a aquellos que la adquieran. El uso de nuestro proyecto será ventajoso en el manejo de registros tanto en asistencia como la fecha de horario y salida.
</p>

## :file_folder: Librerías a aplicar

1. Flask

2. SQLAlchemy

3. OpenCV

4. Utils

5. Numpy

## :rocket: Despegar Web (Temporal)
<p align="justify">
    
    1. Debemos crear nuestro ambiente virtual para correr en nuestra máquina, instalamos el módulo 'pip install virtualenv'. Luego creamos el entorno desde nuestra terminal 'python3 -m denv env', el nombre de nuestro entorno virtual será env. Finalmente la activamos con el siguiente comando en nuestro terminal 'env\Scripts\Activate'.
    
    2. A continuación por ahora instalamos los módulos correspondientes con el siguiente comando en la terminal 'pip install -r requirements.txt'.
    
    3. Ingresamos a nuestro postgresql por terminal en nuestro VSCODE mediante el comando: 'psql -U postgres'.
    
    4. Creamos nuestra base de datos llamada 'database_db', utilizando el comando 'CREATE DATABASE database_db;', luego conectamos nuestra tabla.
    
    5. Finalmente corremos el programa principal 'flask -app proyecto.py run'
    
## :computer: Requisitos
• Compilador de C++: Que soporte la versión C++17 o superior.
    
• Administrador de código fuente: CMake versión 3.10 o superior.
    
• Sistema Operativo: MS Windows, OS Mac o Linux.
    
## :wrench: Guía de instalación
# Para realizar la respectiva instalación, necesitamos tener activo nuestro virtual environment , si no tienes instalado realiza lo siguiente:

1. Crea tu env con el siguiente código: py -m venv env, si posees env en tu IDE selecciona en la esquina inferior derecha en el selector de lenguaje el env.
2. Activa la ruta de tu env en la terminal con el siguiente código: .\env\Scripts\activate
3. Ahora procederás a actualizar tu pip a la última versión (si es necesario) con el siguiente código: python.exe -m pip install --upgrade pip
4. Procede a instalar todas las librerías.
5. Debes descargar opencv 4.8 : https://opencv.org/releases/ y cmake: https://cmake.org/download/, además de modificar tu archivo CMakeLists.txt para el correcto funcionamiento de opencv.
6. Luego de haber descargado ambas partes deben editar sus variables de entorno del sistema, van a las variables del sistema y añaden las rutas donde instalaron opencv y cmake, en mi caso son:

C:\Users\Godel\Documents\opencv\build\x64\vc16\bin

C:\Users\Godel\Documents\opencv\build\x64\vc16\lib

C:\Program Files\CMake\bin

7. Configuras tu CMakeLists.txt para ocupar opencv en la versión que desees.
    
## :page_facing_up: Instrucciones o reglas de uso
 # Se ejecutará el archivo main para abrir la cámara web del dispositivo que estas ocupando, este capturará tu rostro y reconocerá la emoción según los gestos de tu rostro.
    
## :tv: Link del video
# https://www.youtube.com/watch?v=44-PHIaOvJo

## Bibliografía
# [1] G. Solano, «Omes,» 07 jul 2023. [En línea]. Available: https://omes-va.com/reconocimiento-de-emociones-opencv-python/. [Último acceso: 31 ago 2022].

# [2] https://ieeexplore.ieee.org/document/9754019

# [3] https://neuraspike.com/blog/realtime-emotion-detection-system-pytorch-opencv/
    
## Grupo 2
- Ricardo Amiel Acuña Villogas
- Enzo Sebastián Gómez Villegas
- Matías Castillo Quincho
- Renzo Alfonso Acervo Correa
- Mateo Espinoza Monti
- Dicson Marcelo Azalde Lazo
    
    
    



