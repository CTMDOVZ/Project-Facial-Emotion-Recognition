from flask import Flask, render_template, request, jsonify
from flask_sqlalchemy import SQLAlchemy
import uuid
#import tensorflow as tf

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///database_db.db'
db = SQLAlchemy(app)
#model = tf.keras.models.load_model('model.h5')

class Empleado(db.Model):
    id = db.Column(db.String(50), primary_key=True)
    
    nombre = db.Column(db.String(50))
    horario_entrada = db.Column(db.DateTime)
    horario_salida = db.Column(db.DateTime)

    def __init__(self, nombre):
        self.id = str(uuid.uuid4())
        self.nombre = nombre
@app.route('/')
def index():
    return render_template('index.html')

@app.route('/registro', methods=['POST'])
def registro():
    #file = request.files['file']
    nombre = request.form['nombre']
    
    # Realizar el reconocimiento facial en la imagen(y/o video)
    
    
    # Utilizar el algoritmo de TensorFlow para predecir la identidad del trabajador
    
    
    empleado = Empleado(nombre)
    db.session.add(empleado)
    db.session.commit()

    return jsonify({'message': 'Registro realizado con éxito'})

@app.route('/registro/<empleado_id>', methods=['GET','DELETE'])
def verificacion(empleado_id):
    file = request.files['file']
    
    # Realizar el reconocimiento facial en la imagen(y/o video)
    
    
    # Utilizar el modelo de TensorFlow para predecir la identidad del trabajador
    
    
    # Buscar al empleado en la base de datos
    if request.method == 'GET':
        empleado = Empleado.query.filter_by(id=empleado_id).first()
        if not empleado:
            return jsonify({'message': 'Trabajador no encontrado'})
    
    # Actualizar el horario de entrada o salida del empleado
    
    
    
    db.session.commit()

    return jsonify({'message': 'Registro de horario realizado con éxito'})

if __name__ == '__main__':
    db.create_all()
    app.run()
