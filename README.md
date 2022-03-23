PAV - P2: detección de actividad vocal (VAD)
============================================

Esta práctica se distribuye a través del repositorio GitHub [Práctica 2](https://github.com/albino-pav/P2),
y una parte de su gestión se realizará mediante esta web de trabajo colaborativo.  Al contrario que Git,
GitHub se gestiona completamente desde un entorno gráfico bastante intuitivo. Además, está razonablemente
documentado, tanto internamente, mediante sus [Guías de GitHub](https://guides.github.com/), como
externamente, mediante infinidad de tutoriales, guías y vídeos disponibles gratuitamente en internet.


Inicialización del repositorio de la práctica.
----------------------------------------------

Para cargar los ficheros en su ordenador personal debe seguir los pasos siguientes:

*	Abra una cuenta GitHub para gestionar esta y el resto de prácticas del curso.
*	Cree un repositorio GitHub con el contenido inicial de la práctica (sólo debe hacerlo uno de los
	integrantes del grupo de laboratorio, cuya página GitHub actuará de repositorio central del grupo):
	-	Acceda la página de la [Práctica 2](https://github.com/albino-pav/P2).
	-	En la parte superior derecha encontrará el botón **`Fork`**. Apriételo y, después de unos segundos,
		se creará en su cuenta GitHub un proyecto con el mismo nombre (**P2**). Si ya tuviera uno con ese 
		nombre, se utilizará el nombre **P2-1**, y así sucesivamente.
*	Habilite al resto de miembros del grupo como *colaboradores* del proyecto; de este modo, podrán
	subir sus modificaciones al repositorio central:
	-	En la página principal del repositorio, en la pestaña **:gear:`Settings`**, escoja la opción 
		**Collaborators** y añada a su compañero de prácticas.
	-	Éste recibirá un email solicitándole confirmación. Una vez confirmado, tanto él como el
		propietario podrán gestionar el repositorio, por ejemplo: crear ramas en él o subir las
		modificaciones de su directorio local de trabajo al repositorio GitHub.
*	En la página principal del repositorio, localice el botón **Branch: master** y úselo para crear
	una rama nueva con los primeros apellidos de los integrantes del equipo de prácticas separados por
	guion (**fulano-mengano**).
*	Todos los miembros del grupo deben realizar su copia local en su ordenador personal.
	-	Copie la dirección de su copia del repositorio apretando en el botón **Clone or download**.
		Asegúrese de usar *Clone with HTTPS*.
	-	Abra una sesión de Bash en su ordenador personal y vaya al directorio **PAV**. Desde ahí, ejecute:

		```.sh
		git clone dirección-del-fork-de-la-práctica
		```

	-	Vaya al directorio de la práctica `cd P2`.
	-	Añada la etiqueta `origin` a su copia del repositorio. Esto es útil para facilitar los *push* y
		*pull* al repositorio original:
		```.sh
		git remote add origin dirección-del-fork-de-la-práctica
		```
	-	Cambie a la rama **fulano-mengano** con la orden:

		```.sh
		git checkout fulano-mengano
		```

*	A partir de este momento, todos los miembros del grupo de prácticas pueden trabajar en su directorio
	local del modo habitual.
	-	También puede utilizar el repositorio remoto como repositorio central para el trabajo colaborativo
		de los distintos miembros del grupo de prácticas; o puede serle útil usarlo como copia de
		seguridad.
	-	Cada vez que quiera subir sus cambios locales al repositorio GitHub deberá confirmar los
		cambios en su directorio local:

		```.sh
		git add .
		git commit -m "Mensaje del commit"
		```

		y, a continuación, subirlos con la orden:

		```.sh
		git push -u origin fulano-mengano
		```

*	Al final de la práctica, la rama **fulano-mengano** del repositorio GitHub servirá para remitir la
	práctica para su evaluación utilizando el mecanismo *pull request*.
	-	Vaya a la página principal de la copia del repositorio y asegúrese de estar en la rama
		**fulano-mengano**.
	-	Pulse en el botón **New pull request**, y siga las instrucciones de GitHub.


Entrega de la práctica.
-----------------------

Responda, en este mismo documento (README.md), los ejercicios indicados a continuación. Este documento es
un fichero de texto escrito con un formato denominado _**markdown**_. La principal característica de este
formato es que, manteniendo la legibilidad cuando se visualiza con herramientas en modo texto (`more`,
`less`, editores varios, ...), permite amplias posibilidades de visualización con formato en una amplia
gama de aplicaciones; muy notablemente, **GitHub**, **Doxygen** y **Facebook** (ciertamente, :eyes:).

En GitHub. cuando existe un fichero denominado README.md en el directorio raíz de un repositorio, se
interpreta y muestra al entrar en el repositorio.

Debe redactar las respuestas a los ejercicios usando Markdown. Puede encontrar información acerca de su
sintáxis en la página web [Sintaxis de Markdown](https://daringfireball.net/projects/markdown/syntax).
También puede consultar el documento adjunto [MARKDOWN.md](MARKDOWN.md), en el que se enumeran los
elementos más relevantes para completar la redacción de esta práctica.

Recuerde realizar el *pull request* una vez completada la práctica.

Ejercicios
----------

### Etiquetado manual de los segmentos de voz y silencio

- Etiquete manualmente los segmentos de voz y silencio del fichero grabado al efecto. Inserte, a 
  continuación, una captura de `wavesurfer` en la que se vea con claridad la señal temporal, el contorno de
  potencia y la tasa de cruces por cero, junto con el etiquetado manual de los segmentos.

<img width="1366" alt="Etiqueta de los segmentos de voz y silencio" src="https://github.com/bgonzalezbosch/P2/blob/Bernat-Roger/wavesurfer1.png">

EN la imagen se muestra la captura del audio pav_4151.wav donde hemos segmentado las partes de voz (v) y sulencio (s) en la transcripcion .lab. debajo podemos ver la tasa de cruces por cero, el contorno de portencia y por ultimo la forma de onda de la señal junto al eje temporal. 

- A la vista de la gráfica, indique qué valores considera adecuados para las magnitudes siguientes:

	* Incremento del nivel potencia en dB, respecto al nivel correspondiente al silencio inicial, para
	  estar seguros de que un segmento de señal se corresponde con voz.

	Si nos fijamos en las gráficas, vemos como el incremento llega a más de 60 dB en el contorno de potencia respecto al silencio inicial.

	* Duración mínima razonable de los segmentos de voz y silencio.

	- Duración mínima de segmentos de voz: 2.83s
	- Duración mínima de segmentos de silencio: 0.388s

	* ¿Es capaz de sacar alguna conclusión a partir de la evolución de la tasa de cruces por cero?

	sacamos tres conclusiones de detección: tenemos tasa alta de cruces para las consonantes sordas, tasa baja de cruces para detectar un tramo de voz y tasa media de cruces para un tramode silencio con ruido de fondo.

### Desarrollo del detector de actividad vocal

- Complete el código de los ficheros de la práctica para implementar un detector de actividad vocal tan
  exacto como sea posible. Tome como objetivo la maximización de la puntuación-F `TOTAL`.

El código definitivo se puede consultar en la carpeta src. 

- Inserte una gráfica en la que se vea con claridad la señal temporal, el etiquetado manual y la detección
  automática conseguida para el fichero grabado al efecto. 

<img width="1366" alt="wavesurfer con vad y lab" src="https://github.com/bgonzalezbosch/P2/blob/Bernat-Roger/wavesurfer2.png"> 

- Explique, si existen. las discrepancias entre el etiquetado manual y la detección automática.

Existen grandes diferencias entre los dos etiquetados. Principamentne vemos como vad es mucho más preciso en cuanto a reconocimiento de voz acotando de forma más estricta la voz y el silencio. Se puede apreciar en la forma de onda como en tramos hay silencio muy corto en tiempo y lab lo ignora no como vad que lo tiene en cuenta. Esto es consecuencia de los umbrales que hemos considerado para realizar el detector de voz.

Para profundizar en los resultados, la siguiente imagen nos muestra los valores de la tasa de recall que obtenemos tanto para la voz (96.24%) como para el silencio (90.69%). Tambien se nos muestra la precisión de deteción de la voz (95.82%) y del silencio (91.59%). Finalemnte, sus resoectivos F_score son de 96.15% para la voz y 91.41% para el silencio. Lo que nos da una media de 93.75%, un valor muy cernano a 100%, valor que seria el ideal.

<img width="826" alt="precission recall y f_score del fichero pav_4151" src="https://github.com/bgonzalezbosch/P2/blob/Bernat-Roger/vad_evaluation.png">

- Evalúe los resultados sobre la base de datos `db.v4` con el script `vad_evaluation.pl` e inserte a 
  continuación las tasas de sensibilidad (*recall*) y precisión para el conjunto de la base de datos (sólo
  el resumen).

<img width="824" alt="wprecission recall y f_score de db.v4" src="https://github.com/bgonzalezbosch/P2/blob/Bernat-Roger/summary.png">

ejecutando y analizando con nuestro sistema de detección la bateria de ficheros que se encuentran en la carpeta db.v4, hemos obtenido los siguietes valores del sumario:

VOZ			Recall:	86.26%		Precision: 96.15%		F_score: 88.07%
SILENCIO	Recall:	95.12%		Precision: 83.06%		F_score: 85.22%

Lo que nos da un total de 86.63%

Vistos los resultados, podemos determinar que son bastante buenos aun que no tan cercanos al anterior caso que hemos visto. Es normal, en este caso evaluamos muchos más ficheros y entre ellos hay mucha disparidad. En algunos caos nos hemos acercad mucho (más de 98%) como en el caso del fichero "pav_4121" pero en otros no hemos acertado tanto como por ejempplo "pav_4172.lab" con cerca de un 61%. Es mejorable sin duda pero en lineas generales obr¡tenemos una F_score cercana al 87% que es bastante alta.

### Trabajos de ampliación

#### Cancelación del ruido en los segmentos de silencio

- Si ha desarrollado el algoritmo para la cancelación de los segmentos de silencio, inserte una gráfica en
  la que se vea con claridad la señal antes y después de la cancelación (puede que `wavesurfer` no sea la
  mejor opción para esto, ya que no es capaz de visualizar varias señales al mismo tiempo).

  Hmos hecho una captura donde se muestran dos ventantas de wavesurfer. En la ventana superior se ve la form de onda original y se aprecia claramente el ruido en los segmentos de sielncio. En la inferior vemos como el sonido introducido queda cancelado y desaparece.

  <img width="1352" alt="pav_4151 sin ruido en los segmentos de silencio" src="https://github.com/bgonzalezbosch/P2/blob/Bernat-Roger/no_noise.png">

#### Gestión de las opciones del programa usando `docopt_c`

- Si ha usado `docopt_c` para realizar la gestión de las opciones y argumentos del programa `vad`, inserte
  una captura de pantalla en la que se vea el mensaje de ayuda del programa.


### Contribuciones adicionales y/o comentarios acerca de la práctica

- Indique a continuación si ha realizado algún tipo de aportación suplementaria (algoritmos de detección o 
  parámetros alternativos, etc.).

- Si lo desea, puede realizar también algún comentario acerca de la realización de la práctica que
  considere de interés de cara a su evaluación.

Queriamos destacar que el uso de la plataforma GitHub nos ha facilitado bastante el trabajo. Al ser la primera vez, nos ha costado un poco acostumbrarnos a dicha herramienta, sobretodo en los procesos de subida y actualización de ficheros. Hemos tradao un poco en configurarlo y aprender a usar github y nos ha retrasado un poco. Para la siguiente entrega ya lo tendremos por la mano.

### Antes de entregar la práctica

Recuerde comprobar que el repositorio cuenta con los códigos correctos y en condiciones de ser 
correctamente compilados con la orden `meson bin; ninja -C bin`. El programa generado (`bin/vad`) será
el usado, sin más opciones, para realizar la evaluación *ciega* del sistema.
